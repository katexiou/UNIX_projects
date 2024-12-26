def prokaryotic_sequence(sequence):
    start_codon = "ATG"
    end_codons = ["TAA", "TAG", "TGA"]
    found = False
   
    for i in range(0,len(sequence)-2):
        if sequence[i:i+3] == start_codon:
            for j in range(i+3,len(sequence)-2):
                if sequence[j:j+3] in end_codons:
                    found = True
                    print("There is one prokaryotic sequence:", sequence[i:j+3])
                    break
    if not found:
        print("There is none prokaryotic sequence.")
           
    
allowed_letters = ["A", "T", "C", "G"]

while True:
    sequence = input("Enter sequence:").upper()
    invalid = False

    for letter in sequence:
        if letter not in allowed_letters:
            invalid = True
            print("The input you entered is not valid.Try again.")
            break

    if not invalid:
        print(f"The sequence you entered is:{sequence}")
        result = prokaryotic_sequence(sequence)


