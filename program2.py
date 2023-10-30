def convert_to_base_10_python(input_string):
    result = []
    for char in input_string:
        if 'a' <= char <= 'z':
            base_10_value = ord(char) - ord('a') + 10
            result.append(base_10_value)
    return result

input_string = "hello"
base_10_numbers = convert_to_base_10_python(input_string)
print(base_10_numbers)
