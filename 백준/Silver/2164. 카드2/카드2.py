from collections import deque

N = int(input())

# 1 ~ N 저장 (deque로 초기화)
arr = deque(range(1, N + 1))

while True:
    if len(arr) == 1:
        print(arr[0])
        break
    else:
        arr.popleft()  # 첫 번째 원소 삭제
        arr.append(arr.popleft())  # 첫 번째 원소를 배열의 끝에 추가
