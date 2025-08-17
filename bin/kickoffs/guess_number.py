low = 0
high = 1_000_000_000

while True:
    mid = low + (high - low) // 2
    print(mid, flush=True)

    c = input().strip()

    if c == '<':
        high = mid - 1
    elif c == '>':
        low = mid + 1
    elif c == '=':
        print(f"! {mid}")
        break

