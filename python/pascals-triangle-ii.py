class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        triangle = [[1], [1, 1]]
        if rowIndex == 0:
            return triangle[0]
        if rowIndex == 1:
            return triangle[1]
        for i in range(1, rowIndex):
            prev_row = triangle[i]
            new_row = [1]
            for j in range(0, len(prev_row) - 1):
                new_sum = prev_row[j] + prev_row[j + 1]
                new_row.append(new_sum)
            new_row.append(1)
            triangle.append(new_row)

        return triangle[rowIndex]

        
