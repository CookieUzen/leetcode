input = 'aoeubababoaoao'

def ifPalindrome(input):
    if len(input) == 1:
        return False

    for i in range(len(input)//2):
        if not (input[i] == input[-(i+1)]):
            return False

    return True

longest = ""
longestLength = 0
for i in range(len(input)):
    for j in range(len(input), i, -1):
        string = input[i:j]
        if ifPalindrome(string):
            if len(string) > longestLength:
                longestLength = len(string)
                longest = string

print(longest)
