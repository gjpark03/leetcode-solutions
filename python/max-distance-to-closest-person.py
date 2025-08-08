class Solution(object):
    def maxDistToClosest(self, seats):
        """
        :type seats: List[int]
        :rtype: int
        """
        n = len(seats)
        max_distance = 0

        first_person = 0
        while first_person < n and seats[first_person] == 0:
            first_person += 1
        max_distance = first_person

        last_person = n - 1
        while last_person >= 0 and seats[last_person] == 0:
            last_person -= 1
        max_distance = max(max_distance, n - 1 - last_person)

        start_index = first_person
        while start_index <= last_person:
            if seats[start_index] == 1:
                next_person = start_index + 1
                while next_person <= last_person and seats[next_person] == 0:
                    next_person += 1
                
                if next_person <= last_person and next_person > start_index + 1:
                    empty_seats_count = next_person - start_index - 1
                    distance = (empty_seats_count + 1) // 2
                    max_distance = max(max_distance, distance)
                
                start_index = next_person
            else:
                start_index += 1
        
        return max_distance
