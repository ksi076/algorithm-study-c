def solution(date1, date2):
    answer = 0
    num = 0
    num2 = 0
    sum1 = 0
    sum2 = 0
    date1[0] *= 100
    date2[0] *= 100
    date1[1] *= 10
    date2[1] *= 10
    for num in date1:
        sum1 += num
    for num2 in date2:
        sum2 += num2
    
    if sum1 < sum2:
        return 1
    else:
        return 0