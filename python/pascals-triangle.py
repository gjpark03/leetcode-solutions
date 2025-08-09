class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        i = 1
        rows = []
        for i in range(0, numRows):
            if i == 0:
                rows.append([1])
            elif i == 1:
                rows.append([1, 1])
            else:
                new_row = [1]
                prev_row = rows[i - 1]
                for j in range(len(prev_row) - 1):
                    new_num = prev_row[j] + prev_row[j + 1]
                    new_row.append(new_num)
                new_row.append(1)
                rows.append(new_row)
        return rows




        
        
