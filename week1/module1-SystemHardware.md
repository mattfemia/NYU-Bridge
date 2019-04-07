# Fundamentals of System Hardware

## CPU

- Has its own register but only consists of few bytes

## Fetch-Decode-Execute Cycle

- Fetch = CPU moves instruction from RAM into CPU --> into instruction register
- Decode = CPU interprets instructions
- Execute = CPU performs task associated with the instructions
- Process repeats. Takes about 10 nanoseconds. CPU performs millions of instructions/second

## Memory Hiararchy

1. Register (576 B) -- Need to be used sparingly due to low memory
2. Cache L1 (64KB) 4x slower than Register
3. Cache L2 (20MB) 1.5x slower than L1
4. DDR/Main Memory/RAM (384GB) 2x slower than L2 -- deletes on shutdown = volatile
5. Secondary Storage/HDD/SSD (TBs) -- Permanent storage
6. Tertiary Storage/Flash Drives -- offline storage

## RAM

- Can access any byte of memory in same amount of time
- Volatile memory
- When running programs: Machine language instructions are brought into RAM and then pulled into CPU by fetch and execute cycle

### Secondary Storage

1. HDD

    - Contains multiple magnetic discs which rotate together at constant velocity
    - Contains read heads which move to different radii on disk to read certain positions
    - Takes relatively long time to move to different radii aka tracks

2. SDD

   - Contains number of chips like USB flash drives
   - Data is stored electronically
   - All data can be accessed in same amount of time unlike HDD