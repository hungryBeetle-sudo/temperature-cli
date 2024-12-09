#include <iostream>
double celsiusToKelvin(double celsius){
	return celsius + 273;
}

double celsiusToFahrenheit(double celsius){
	return ( ((celsius/5) * 9) + 32 );
}

double kelvinToCelsius(double kelvin){
	return kelvin - 273;
}

double fahrenheitToCelsius(double fahrenheit){
	return ((fahrenheit - 32) / 9) * 5;
}

double fahrenheitToKelvin(double fahrenheit){
	double celsius = fahrenheitToCelsius(fahrenheit);
	return celsiusToKelvin(celsius);
}

double kelvinToFahrenheit(double kelvin){
	double celsius = kelvinToCelsius(kelvin);
	return fahrenheitToCelsius(celsius);
}

int main(int argc, char* argv[]){

	if(argc <= 1){
		std::cout << "Usage: Executable [options] <temperature>" << "\n\n";
		std::cout << "Options: temperature scales to convert from and to\n";
		std::cout << "f: Fahrenheit\nc: Celsius\nk: kelvin\n\n";
		std::cout << "Example: Executable -fc 157\n" << "Convert 157F to Celsius.\n";
	}
	else{

	}
	/* double temperature = std::stod(argv[2]);
	double result;

	char origin_scale = argv[1][1];
	char final_scale = argv[1][2];*/

	return 0;
}
