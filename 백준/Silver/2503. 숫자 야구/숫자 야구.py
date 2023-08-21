qnum = int(input()) #how many questions

hints = [list(map(int,input().split())) for _ in range(qnum)] #아이템 3개의 1차원 list를 담을 list
#hint[i][0] = number hint[i][1] = strike hint[i][2] = ball

answer_cand = 0

for first in range(1,10):
    for second in range(1,10):
        for last in range(1,10):
            if(first == second or first == last or second == last):
                continue
            
            cnt = 0 #모든 힌트를 만족하는지 여부 판단
            for hint in hints:
                number = hint[0]
                strike = hint[1]
                ball = hint[2]

                strike_cnt = 0
                ball_cnt = 0
                f_digit = int(number/100)
                s_digit = int((number/10)%10)
                l_digit = number%10

                if(first == f_digit):
                    strike_cnt += 1
                if(second == s_digit):
                    strike_cnt += 1
                if(last == l_digit):
                    strike_cnt += 1
                
                if(first == s_digit or first == l_digit):
                    ball_cnt += 1
                if(second == f_digit or second == l_digit):
                    ball_cnt += 1
                if(last == f_digit or last == s_digit):
                    ball_cnt += 1
                
                if(strike_cnt== strike and ball_cnt==ball):
                    cnt += 1

            if(cnt == qnum):
                answer_cand += 1
                #print(first,second,last)

print(answer_cand)