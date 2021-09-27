class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Solution:
    def display(self, head):
        current = head

        while current:
            print(current.data, end=' ')
            current = current.next

    def insert(self, head, data):
        if head is None:
            head = Node(data)
            #cach2 loaij self.tail
            self.tail = head  

            

        else:

            #loai het o duoi
            #dequy
            #head.next = self.insert(head.next,data)
            node = Node(data)

            self.tail.next = node
            self.tail = node

        return head
        #cach 2 chay ton nang luong hon


if __name__ == '__main__':
    my_list = Solution()

    head = None

    for _ in range(int(input())):
        data = int(input())

        head = my_list.insert(head, data)

    my_list.display(head)