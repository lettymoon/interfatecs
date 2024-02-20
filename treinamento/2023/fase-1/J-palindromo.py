str = input();
str = str.replace(" ", "");

rstr = str[::-1];

if str == rstr:
    print("Palindromo");
else:
    print("Não Palindromo");
