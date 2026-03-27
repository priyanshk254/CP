// Let’s simulate the optimal strategy. Put all elements of the arrays into heaps (priority queues) for
// maximum values. Then, while both heaps are non-empty, alternately extract the maximum element from
// the moving player’s heap and use it to attack the maximum element in the adversarial heap. As one of
// the heaps runs off, the winner is determined.
