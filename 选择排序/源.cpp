#include <iostream>
using namespace std;

template<typename T> auto twd_swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;}

template<typename T> auto selectionSort(T array[],int length) {
	for (int index = 0; index < length; index++) {
		int min = index;
		for (int index_inside = index; index_inside < length; index_inside++) {
			if (array[min] > array[index_inside]) { 
				min = index_inside; }}
		twd_swap(array[index], array[min]);
		for (int temp = 0; temp < length; temp++) { cout << array[temp] << " "; }
		cout << endl;}}

int i[]{ 25,68,954,126,358,412,98,9,6,100 };

int main() {
	selectionSort(i,sizeof(i)/sizeof(i[0])); }