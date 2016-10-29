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
};

void read_store(vector<armor>* output, string input);
void gen_sets(vector<armor>* chest, vector<armor>* head, vector<armor>* hand, vector<armor>* leg, vector<set>* sets);
void print_armor(armor* input);
void print_set(set* input);

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

void gen_sets(vector<armor>* chest, vector<armor>* head, vector<armor>* hand, vector<armor>* leg, vector<set>* sets)
{
	return;
}

void print_armor(armor* input)
{
		cout << "w=" << input->weight << " p=" << input->poise << endl;
}

void print_set(set* input)
{
	cout << "head" << endl;
	print_armor(input->head);
	cout << "chest" << endl;
	print_armor(input->chest);
	cout << "leg" << endl;
	print_armor(input->leg);
	cout << "hand" << endl;
	print_armor(input->hand);
}
