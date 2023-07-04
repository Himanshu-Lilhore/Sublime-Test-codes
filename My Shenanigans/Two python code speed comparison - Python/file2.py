lst = [9, 2, 7, 4, 8, 4, 6, 8, 3, 6, 8, 4]
size = len(lst)
idx = 0
jdx = 1
while idx < size - 1:
    jdx = idx + 1
    while jdx < size:
        if lst[idx] > lst[jdx]:
            lst[idx], lst[jdx] = lst[jdx], lst[idx]
        jdx += 1
    idx += 1
