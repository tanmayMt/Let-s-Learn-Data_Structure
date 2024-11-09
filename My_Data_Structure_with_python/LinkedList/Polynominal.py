class PolynomialNode:
    def __init__(self, coef, expo):
        self.coef = coef
        self.expo = expo
        self.next = None

class Polynomial:
    def __init__(self):
        self.head = None

    def add_term(self, coef, expo):
        new_node = PolynomialNode(coef, expo)
        if self.head is None:
            self.head = new_node
        else:
            current_node = self.head
            while current_node.next is not None:
                current_node = current_node.next
            current_node.next = new_node

    def __str__(self):
        terms = []
        cur_node = self.head
        while cur_node is not None:
            terms.append(str(cur_node.coef) + "x^" + str(cur_node.expo))
            cur_node = cur_node.next
        return " + ".join(terms)
def add_polynomials(poly1, poly2):
    result = Polynomial()
    cur1 = poly1.head
    cur2 = poly2.head

    while cur1 and cur2:
        if cur1.expo == cur2.expo:
            sum_coef = cur1.coef + cur2.coef
            if sum_coef != 0:
                result.add_term(sum_coef, cur1.expo)
            cur1 = cur1.next
            cur2 = cur2.next
        elif cur1.expo > cur2.expo:
            result.add_term(cur1.coef, cur1.expo)
            cur1 = cur1.next
        else:
            result.add_term(cur2.coef, cur2.expo)
            cur2 = cur2.next

    while cur1:
        result.add_term(cur1.coef, cur1.expo)
        cur1 = cur1.next

    while cur2:
        result.add_term(cur2.coef, cur2.expo)
        cur2 = cur2.next

    return result
# Example

p1 = Polynomial()
p1.add_term(3,4)   # 3x^4
p1.add_term(2,2)   # 2x^2
p1.add_term(1,0)   # 1x^0
print("p1= ",p1)
# 3x^4 + 2x^2 + 1x^0

p2 = Polynomial()
p2.add_term(4,3)
p2.add_term(2,2)
p2.add_term(5, 1)
p2.add_term(1,0)
print("p2=",p2)

result = add_polynomials(p1, p2)

# Display the result
print("Result: ", end="")
print(result)
