def fahrenheit_to_celsius(fahrenheit):
    celsius = (fahrenheit - 32) * 5/9
    return celsius

def celsius_to_fahrenheit(celsius):
    fahrenheit = (celsius * 9/5) + 32
    return fahrenheit

# Example usage
fahrenheit = 98.6
celsius = 37

converted_to_celsius = fahrenheit_to_celsius(fahrenheit)
converted_to_fahrenheit = celsius_to_fahrenheit(celsius)

print(f"{fahrenheit} degrees Fahrenheit is {converted_to_celsius:.2f} degrees Celsius.")
print(f"{celsius} degrees Celsius is {converted_to_fahrenheit:.2f} degrees Fahrenheit.")
