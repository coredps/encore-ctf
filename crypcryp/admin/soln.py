import random
def encrypt(message):
    message=message
    key = random.randint(1, 255)
    print(key)
    encrypted_message = ""
    for char in message:
        encrypted_char = ord(char) ^ key
        encrypted_message += format(encrypted_char, '02x')
    return encrypted_message

def decrypt(encrypted_message):
    key=int(encrypted_message[0]+encrypted_message[1],16) ^ ord("e")
    decrypted_message = ""
    for i in range(0, len(encrypted_message), 2):
        hex_char = encrypted_message[i:i+2]
        encrypted_char = int(hex_char, 16)
        decrypted_char = encrypted_char ^ key
        decrypted_message += chr(decrypted_char)
    return decrypted_message
