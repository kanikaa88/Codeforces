def watermelon(w: int) -> str:
    if w % 2 == 0 and w > 2:
        return "YES"
    else:
        return "NO"

# Read input and call your function
w = int(input())
print(watermelon(w))
