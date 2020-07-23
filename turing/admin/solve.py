from enigma.machine import EnigmaMachine
import itertools


combi = list(itertools.permutations(["I","II","III","IV","V","VI","VII","VIII","Gamma"],r=4))

for i in combi:
    machine = EnigmaMachine.from_key_sheet(
        rotors = i,
           reflector = 'C-Thin',
        ring_settings = [2, 4, 15, 15],
        plugboard_settings = 'en cr ys it al xh wd')

    ciphertext = 'pogaekucczigdsgwkvb'
    
    plaintext = machine.process_text(ciphertext)
    if("ENCORE" in plaintext):
        print("[*] Decrypted Text --> " + plaintext)
        print("[*] Rotor Combination --> " + str(i))

'''
[*] Decrypted Text --> ENCOREHMIKUEHMULMAO
[*] Rotor Combination --> ('Gamma', 'I', 'VI', 'VIII')
'''