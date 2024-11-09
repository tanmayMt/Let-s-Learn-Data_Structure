operators = set(['+', '-', '*', '/', '(', ')', '^'])  # collection of operators
priority = {'+':1, '-':1, '*':2, '/':2, '^':3} # dictionary having priorities of operators
 
 
def infixToPostfix(expr): 
    stack = [] # initialization of empty stack
    output = [] 

    for char in expr:
        if char not in operators:  # if an operand append in postfix expr
            output.append(char)
        else:
            if char=='(':  # else operators push onto stack
                stack.append('(')

            elif char==')':
                while stack and stack[-1]!= '(':
                    output.append(stack.pop())
                stack.pop() # Remove the '(' from the stack

            else: 
                while stack and stack[-1]!='(' and priority[char]<=priority[stack[-1]]:
                    output.append(stack.pop())
                stack.append(char)

    while stack:
        output.append(stack.pop())

    return "".join(output)


expr = input('Enter infix expr : ').replace(" ","")
print('infix notation: ',expr)
print('postfix notation: ',infixToPostfix(expr))