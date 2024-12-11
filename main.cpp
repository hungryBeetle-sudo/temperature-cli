#include <iostream>
#include <regex>

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
	//executable -options input_temp

	if(argc <= 1){
		std::cout << "Usage: Executable [options] <temperature>" << "\n\n";
		std::cout << "Options: temperature scales to convert from and to\n";
		std::cout << "f: Fahrenheit\nc: Celsius\nk: kelvin\n\n";
		std::cout << "Example: Executable -fc 157\n" << "Convert 157F to Celsius.\n";
	}
	else{
		
		std::string options { argv[1] };
		std::string user_input_temperature { argv[2] };
		std::regex options_regex { std::regex("^-[fck]{2}$") };
		bool hasValidOptions { std::regex_match(options, options_regex) };
		
		if(hasValidOptions){

			double temperature = std::stod(user_input_temperature);
			double result;
			char origin_scale = options[1];
			char target_scale = options[2];

			if(origin_scale == 'f'){
				if(target_scale == 'c'){
					result = fahrenheitToCelsius(temperature);
				}
				else if(target_scale == 'k'){
					result = fahrenheitToKelvin(temperature);
				}
			}
			else if(origin_scale == 'c'){
				if(target_scale == 'f'){
					result = celsiusToFahrenheit(temperature);
				}
				else if(target_scale == 'k'){
					result = celsiusToKelvin(temperature);
				}
			}
			else if(origin_scale == 'k'){
				if(target_scale == 'f'){
					result = kelvinToFahrenheit(temperature);
				}
				else if(target_scale == 'c'){
					result = kelvinToCelsius(temperature);
				}
			}
			
			std::cout << result << "\n";
		}
		else{
			std::cout << "Invalid Options: " << options << "\n";
			return 1;
		}

	}

	return 0;
}
