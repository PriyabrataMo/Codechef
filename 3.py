# Constants
MOD = 998244353

# Function to check if the array is non-decreasing after increasing each element
def check_array(a):
    b = sorted(a)
    if a == b:
        return True
    return False

# Main function
def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        
        # Check if the array is already non-decreasing
        if check_array(a):
            print("YES")
            continue

        # Find the elements to increase
        v = []
        maxi = a[0]
        inc = 0
        for i in range(1, n):
            maxi = max(a[i], maxi)
            if a[i] < maxi:
                v.append(i)
                inc = max(inc, maxi - a[i])
        
        # Check if elements to increase are consecutive
        f = True
        for i in range(1, len(v)):
            if v[i] == v[i - 1] + 1:
                f = False
        
        # Increase the elements and check if array becomes non-decreasing
        for it in v:
            a[it] = a[it] + inc
        
        b = sorted(a)
        if a == b and f:
            print("YES")
        else:
            print("NO")

if name == "main":
    main()