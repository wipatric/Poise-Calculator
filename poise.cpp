#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

struct armor
{
	double weight;
	double poise;
};

struct set
{
	armor* chest;
	armor* head;
	armor* hand;
	armor* leg;
	double weight_total;
	double poise_total;
}

void read_store(vector<armor>* output, string input);
void print_armor(vector<armor>* input);

int main()
{

	vector<armor> chest;
	vector<armor> head;
	vector<armor> hand;
	vector<armor> leg;
	read_store(&chest, "Chest.txt");
	read_store(&head, "Head.txt");
	read_store(&hand, "Hand.txt");
	read_store(&leg, "Leg.txt");
	print_armor(&chest);
}

void read_store(vector<armor>* output, string input)
{
	ifstream infile;
	infile.open(input.c_str());
	cout << "reading: " << input << endl;
	while(!infile.eof())
	{
		armor chestpiece;
		infile >> chestpiece.weight >> chestpiece.poise;
		output->push_back(chestpiece);
	}
	
}

void print_armor(vector<armor>* input)
{
	for(int i=0; i<input->size(); i++)
	{
		cout << "w=" << input->at(i).weight << " p=" << input->at(i).poise << endl;
	}
	return;
}
