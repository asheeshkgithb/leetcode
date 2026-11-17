
class MyCircularQueue {
public:
    vector<int> arr;
    int front, rear, size, k;
    MyCircularQueue(int k) {
        this->k = k;
        arr.resize(k);
        front = -1;
        rear = -1;
        size = 0;
    }
    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }

        if (isEmpty()) {
            front = 0;
        }

        rear = (rear + 1) % k;
        arr[rear] = value;
        size++;

        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }

        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % k;
        }

        size--;
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == k;
    }
};
