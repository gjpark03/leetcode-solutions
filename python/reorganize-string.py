class Solution(object):
    def reorganizeString(self, s):
        """
        :type s: str
        :rtype: str
        """
        # Handle edge cases
        if len(s) <= 1:  # O(1) time
            return s
        
        # Count character frequencies efficiently
        char_count = Counter(s)  # O(n) time
        
        # Check if reorganization is possible
        max_freq = max(char_count.values())  # O(k) time
        if max_freq > (len(s) + 1) // 2:  # O(1) time
            return ""
        
        # Create a max heap (using negative counts for max heap behavior)
        # Python's heapq is a min heap, so we use negative values
        max_heap = []
        for char, count in char_count.items():  # O(k) time
            # Push negative count so highest count has lowest negative value
            heapq.heappush(max_heap, (-count, char))  # O(log k) per push
        
        # Build result by alternating between two most frequent characters
        result = []
        
        # Keep track of the previous character to put back in heap
        prev_count = 0
        prev_char = ''
        
        # Process until heap is empty
        while max_heap:  # O(n) iterations total
            
            # Get the most frequent character, also popping it out 
            current_count, current_char = heapq.heappop(max_heap)  # O(log k) time
            
            # Add current character to result
            result.append(current_char)  # O(1) time
            
            # Put previous character back in heap if it still has instances left
            if prev_count < 0:  # Negative count means instances remain
                heapq.heappush(max_heap, (prev_count, prev_char))  # O(log k) time
            
            # Update previous character for next iteration
            # Increment count (toward 0) since we used one instance
            prev_count = current_count + 1  # O(1) time
            prev_char = current_char  # O(1) time
        
        # Convert result to string
        return ''.join(result)  # O(n) time
