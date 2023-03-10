def fibonacci(max_fib):
    result=0
    first=0
    second=1
    if max_fib > 1:
        while(max_fib > 1):
            result = first+second
            first = second
            second = result
            max_fib-=1
    else :
        return(max_fib)
    return(result)
def main():
    fib=fibonacci(1)
    print(fib)
    return(1)

if __name__ ==  "__main__":
    main()
