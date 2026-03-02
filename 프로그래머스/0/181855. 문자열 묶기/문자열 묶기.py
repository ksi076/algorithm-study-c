def solution(strArr):
    answer = 0
    n = []
    cnt = 0
    cntli = []
    for w in strArr:
        n.append(len(w))
    for num in range(1,31):
        for i in n:
            if num == i:
                cnt+=1
        cntli.append(cnt)
        cnt = 0
    answer = max(cntli)    
    
    return answer