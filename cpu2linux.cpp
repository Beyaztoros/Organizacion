#include <iostream>
#include <thread>
#include <vector>
#include <cmath>

const int calculationsPerThread = 1000000;  // Adjust the workload as needed

void task1(int threadId)
{
	for (int i = 0; i < calculationsPerThread; i++)
	{
		double result = std::sin(i) * std::cos(i);
		// You can perform more CPU-intensive calculations here
	}
}

int main()
{
	int nucleos = 2000;
	std::vector<std::thread> threads(nucleos);
	
	for (int i = 0; i < nucleos; i++)
	{
		threads[i] = std::thread(task1, i);
	}
	
	// Wait for the user to press Enter
	std::cin.get();
	
	// Join all the threads before exiting
	for (int i = 0; i < nucleos; i++)
	{
		threads[i].join();
	}
	
	return 0;
}
