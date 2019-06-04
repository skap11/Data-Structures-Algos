"""
To find out the number of blocks queen can attack on a chess board.

Inputs:
Chess board can be of any size (n*n)
Queen position is accepted in a tuple format (r,c)
Obstacles positions are also accepted in a tuple format (r,c)

Sample Input:
5 3 # Board size and obstacles count
4 3 # Queen's position
5 5 # Obstacles position 1
4 2 # Obstacles position 2
2 3 # Obstacles position 3

Output:
10
"""
import os
import collections

def diagonal_check(ro, co, rq, cq):
  return abs(ro - rq) == abs(co - cq)

def mark_obstacles(obstacles):
  obstacles_map = {}
  for obstacle in obstacles:
    obstacles_map[tuple(obstacle)] = True

  return obstacles_map

def get_attacking_points(n, r_q, c_q, xx, yy, obstacles_map):
  attacking_points = 0
  while(queen_moves(n, r_q, c_q, xx, yy) and not obstacles_map[(r_q, c_q)]):
    attacking_points += 1
    r_q += xx
    c_q += yy

  return attacking_points

def queen_moves(n, r_q, c_q, xx, yy):
  if xx==0 and yy==1:
    return n - c_q
  elif xx==0 and yy==-1:
    return c_q - 1
  elif xx==1 and yy==0:
    return n - r_q
  elif xx==-1 and yy==0:
    return r_q - 1
  elif xx==1 and yy==1:
    return min(n-r_q, n-c_q)
  elif xx==1 and yy==-1:
    return min(c_q-1, n-r_q)
  elif xx==-1 and yy==1:
    return min(r_q-1, n-c_q)
  elif xx==-1 and yy==-1:
    return min(c_q-1, r_q-1)
  else:
    return 0

def queensAttack(n, k, r_q, c_q, obstacles):
  obstacles_map = mark_obstacles(obstacles)
  attacking_points = 0

  # Move in right horizontal direction.
  attacking_points += get_attacking_points(n, r_q, c_q, 0, 1, obstacles_map)
  # Move in left horizontal direction.
  attacking_points += get_attacking_points(n, r_q, c_q, 0, -1, obstacles_map)
  # Move in vertical direction.
  attacking_points += get_attacking_points(n, r_q, c_q, 1, 0, obstacles_map)
  # Move in bottom direction.
  attacking_points += get_attacking_points(n, r_q, c_q, -1, 0, obstacles_map)
  # Move in upward right diagonal direction.
  attacking_points += get_attacking_points(n, r_q, c_q, 1, 1, obstacles_map)
  # Move in upward left diagonal direction.
  attacking_points += get_attacking_points(n, r_q, c_q, 1, -1, obstacles_map)
  # Move in downward right diagonal direction.
  attacking_points += get_attacking_points(n, r_q, c_q, -1, 1, obstacles_map)
  # Move in downward left diagonal direction.
  attacking_points += get_attacking_points(n, r_q, c_q, -1, -1, obstacles_map)


  return attacking_points

if __name__ == '__main__':
  fptr = open(os.environ['OUTPUT_PATH'], 'w')

  n, k = map(int, raw_input().split())

  r_q, c_q = map(int, raw_input().split())

  obstacles = []

  for _ in xrange(k):
    obstacles.append(map(int, raw_input().rstrip().split()))

  result = queensAttack(n, k, r_q, c_q, obstacles)

  fptr.write(str(result) + '\n')

  fptr.close()
