def test():
    try:
        text = input("Enter a letter or word: ").strip()
        
        if not text:
            print("Error: You must enter at least one character.")
            return
        
        reversed_text = text[::-1]
        print(f"Reversed: {reversed_text}")
        
        if text == reversed_text:
            print("It is a palindrome")
        else:
            print("It is not a palindrome")
    
    except Exception as e:
        print("An error occurred:", e)

test()
