def reverse_of_string(x):
    str=""
    if len(x)==0:
        return str
    else :
        return x.pop() + reverse_of_string(x)
s = input()
x = list(s)
print(reverse_of_string(x))