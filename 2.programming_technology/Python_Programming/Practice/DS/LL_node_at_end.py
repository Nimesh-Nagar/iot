
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

#head --> 
class LinkedList:
    def __init__(self):
        self.head = None

# traversing and printing data    
    def printList(self):
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next    

    def push(self,new_data):
        new_node = Node(new_data)
        new_node.next = self.head 
        self.head = new_node


    def insertAfter(self, second, new_data):
    
        # 1. check if the given second exists
        if second is None:
            print("The given previous node must inLinkedList.")
            return

        new_node = Node(new_data) 
        # 2. Make next of new Node as next of second
        new_node.next = second.next 
        # 3. make next of second as new_node
        second.next = new_node                              


if __name__ == "__main__":

    #start with empty list
    llist = LinkedList()

    llist.head = Node(1)
    second = Node(2)
    third = Node(3)

    llist.head.next = second # Link first node with second npde
    second.next = third      # Link second node with the third node

    llist.printList()
    
# add node at begining
    # llist.push(22)
    # print("New Node added : ")
    # llist.printList()

 # add node at any given position 
    print("add new")
    llist.insertAfter(second,11)
    llist.printList()

    



