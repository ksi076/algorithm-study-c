def solution(a, d, included):
    i = 0
    answer = 0
    for tf in included:
        if tf == True:
            answer += a + i * d
        i += 1

    return answer