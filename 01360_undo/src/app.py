filename = "input.txt"  # 입력 파일 이름

with open(filename, "r") as file:
    N = int(file.readline())  # 명령의 개수 입력받기

    text = ""  # 텍스트 초기화
    stack = []  # 되돌리기를 위한 스택 초기화

    for _ in range(N):
        line = file.readline().split()  # 한 줄씩 읽어와서 공백으로 분리
        cmd = line[0]  # 명령

        if cmd == "type":
            t = int(line[2])  # 수행 시간
            c = line[1]  # 문자
            text += c  # 텍스트에 문자 추가
            stack.append((t, len(c)))  # 스택에 (시간, 문자 길이) 저장
        else:
            t = int(line[1])  # 수행 시간
            undo_count = int(line[2])  # 되돌릴 작업 개수
            while stack and stack[-1][0] > t - undo_count:  # 되돌릴 작업 개수에 해당하는 작업 처리
                prev_t, prev_len = stack.pop()  # 가장 최근에 추가된 작업 꺼내기
                text = text[:-prev_len]  # 텍스트에서 해당 작업의 길이만큼 제거

print(text)  # 결과 출력
