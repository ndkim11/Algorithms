#청기 - 백기 - 청기 - 백기 순으로 뒤집히는데 최종적으로 백이 나올려면 홀수번 뒤집혀야 함
#이는 제곱수에서만 가능하다. ex) 1,5,25 - 3번 뒤집힘 1,2,3,4,6,12 - 6번 뒤집힘

N = int(input())
round_n = int(N**0.5)
print(round_n)