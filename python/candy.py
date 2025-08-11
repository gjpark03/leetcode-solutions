class Solution(object):
    def candy(self, ratings):
        """
        :type ratings: List[int]
        :rtype: int
        """
        # Input: Ratings, Integer array of n elements
        # Requirements: each child must have at least one candy
        # children with higher rating get more candies than only their neighbors
        # find the minimum
        sum = 0
        n = len(ratings)

        left_to_right = [1] * n
        right_to_left = [1] * n
        for i in range(1, n):
            if ratings[i] > ratings[i - 1]:
                left_to_right[i] = left_to_right[i - 1] + 1
        for i in range(n - 2, -1, -1):
            if ratings[i] > ratings[i + 1]:
                right_to_left[i] = right_to_left[i + 1] + 1
        for i in range(n):
            sum += max(left_to_right[i], right_to_left[i])

        return sum

        
