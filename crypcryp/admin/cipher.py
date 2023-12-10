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
