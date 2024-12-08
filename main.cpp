#include <iostream>
double celsiusToKelvin(double celsius){
	return celsius + 273;
}

double celsiusToFahrenheit(double celsius){
	//C/5 = (F - 32)/9
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
	double temperature = std::stod(argv[2]);
	double result;

	char origin_scale = argv[1][1];
	char final_scale = argv[1][2];

	std::cout << "Hello World!\n";
	std::string foo = argv[argc - 1];
	
	std::cout << "TEMP:" << celsiusToFahrenheit(57 );
	return 0;
}
