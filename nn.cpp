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

typedef struct neuron {
		int data;
		int activation_function(){
			/* TO DO */
		};
}neuron;

class nn{

	public :

	neuron*** ptr_neuron;

	// default constructor
	nn()
	{
		/* create an ANN of 3 layers,
		   input layer will consist of 255 neurons,
		   middle layer will consist of 255 neurons,
		   output layer will consist of two neurons,
		*/
		ptr_neuron = new neuron**[255];
		for( int i = 0 ; i < 255 ; i++ )
		{
			ptr_neuron[i] = new neuron*[255];
			
	
	}

	// parameterized constructor
	nn(int no_of_neurons_in_input_layer, int no_of_neurons_in_middle_layer, int no_of_neurons_in_output_layer)
	{
		ptr_neuron = new neuron**[no_of_neurons_in_input_layer];
	}

	// feedforward 
	void feedforward()
	{
	}

	// backpropagation
	void backpropagation()
	{
	} 

};



int main()
{
	nn ann = nn();
	EXIT_SUCCESS;	
}
