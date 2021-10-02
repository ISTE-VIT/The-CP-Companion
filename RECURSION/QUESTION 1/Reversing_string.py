def reverse(s):
    if len(s) == 0:                  #Checking if the string isn't empty
        return s
    else:
        return reverse(s[1:])+s[0]   #This takes the whole string except the first element and adds the first element to the last


inp=input()
print(reverse(inp))