def quicksort(array):

  if len(array) < 2:
    return array

  else:
    pivot = array[0]

    less = [i for i in array[1:] if i <= pivot]

    greater = [i for i in array[1:] if i > pivot]

    return quicksort(less) + [pivot] + quicksort(greater)


def main():
    size =int(input())
    array = []
    for _ in range(size):
        array += list(map(int, input().split()))
    print(quicksort(array))

if __name__ =="__main__":
    main()