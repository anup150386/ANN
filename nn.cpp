/*
create an artificial neural network

steps to create the artificial neural network
-> node structure which will reperesent a neuron
-> array of neurons
-> layer will consist of array of neurons
-> activation function will be sigmoidal function


*/


#include <iostream>

using namespace std;

class neuron{
public:
	float weights;

	neuron(){
		weights = 1000;
	}

private:

	float sigmoidal_activation();

	float tanh_activation();

	float relu_activation();
};

class nn{

public :

	neuron*** ptr_neuron;
	neuron* input_layer;
	neuron* middle_layer;
	neuron* output_layer;

	nn()
	{
		/* create an ANN of 3 layers,
		   input layer will consist of 255 neurons,
		   middle layer will consist of 255 neurons,
		   output layer will consist of two neurons,
		*/
		neuron input_layer[255];
		neuron middle_layer[255];
		neuron output_layer[2];
	};

private:
	nn(int no_of_neurons_in_input_layer, int no_of_neurons_in_middle_layer, int no_of_neurons_in_output_layer){
		neuron input_layer[no_of_neurons_in_output_layer];
		neuron middle_layer[no_of_neurons_in_middle_layer];
		neuron output_layer[no_of_neurons_in_output_layer];
	};

	void feedforward();
	void backpropagation();

};

int main()
{
	nn ann = nn();
	EXIT_SUCCESS;	
}
