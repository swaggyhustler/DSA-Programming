class LinkedList:
    def __init__(self, data):
        self.data=data
        self.next=None
class LL: 
    def __init__(self):
        self.head=None
    def appendList(self, data):
        if(self.head == None):
            self.head = LinkedList(data)
        else:
            temp=self.head
            while(temp.next):
                temp=temp.next
            temp.next = LinkedList(data)
    def printList(self):
        temp = self.head
        while(temp):
            print(temp.data,"-->",end=" ")
            temp=temp.next
        print("None")
        
    def evenOdd(self):
        temp = self.head
        if(temp.data%2==0):
            while(temp.next):
                if(temp.data%2==0):
                    self.head = temp.next
                    temp = temp.next
                else:
                    break
            prev = temp
            curr = prev.next
            while(curr):
                if(curr.data%2==0):
                    prev.next=curr.next
                prev = curr
                curr = curr.next
               
        else:
            while(temp.next):
                if(temp.data%2!=0):
                    self.head = temp.next
                    temp = temp.next
                else:
                    break
            prev = temp
            curr = prev.next
            while(curr):
                if(curr.data%2!=0):
                    prev.next=curr.next
                prev = curr
                curr = curr.next
            
        
obj = LL()
obj.appendList(1)
obj.appendList(2)
obj.appendList(3)
obj.appendList(4)
obj.appendList(5)
obj.appendList(6)
obj.evenOdd()
obj.printList();