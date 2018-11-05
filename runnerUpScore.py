if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    arr=sorted(arr)
    temp=arr[n-1]
    for i in range(n-1,-1,-1):
        if arr[i] != temp:
            print(arr[i])
            break      
