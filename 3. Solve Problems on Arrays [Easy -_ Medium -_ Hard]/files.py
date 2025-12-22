import os
import re
import string

# Set your folder path manually here:
base_path = r"F:\CPP_CP\Data-Structure-and-Algorithms-Sheet\Arrays"

def safe(name):
    """Sanitize filename and remove invalid characters"""
    name = re.sub(r'[<>:"/\\|?*]', "_", name)
    name = name.replace(" ", "")  # remove spaces
    return name

arrays_data = {
    "Easy": [
        "Largest Element in an Array",
        "Second Largest Element in an Array without sorting",
        "Check if the array is sorted",
        "Remove duplicates from Sorted array",
        "Left Rotate an array by one place",
        "Left rotate an array by D places",
        "Move Zeros to end",
        "Linear Search",
        "Find the Union",
        "Find missing number in an array",
        "Maximum Consecutive Ones",
        "Find the number that appears once, and other numbers twice.",
        "Longest subarray with given sum K (positives)",
        "Longest subarray with sum K (Positives + Negatives)"
    ],
    "Medium": [
        "2Sum Problem",
        "Sort an array of 0's 1's and 2's",
        "Majority Element (>n/2 times)",
        "Kadane's Algorithm, maximum subarray sum",
        "Print subarray with maximum subarray sum",
        "Stock Buy and Sell",
        "Rearrange the array in alternating positive and negative items",
        "Next Permutation",
        "Leaders in an Array problem",
        "Longest Consecutive Sequence in an Array",
        "Set Matrix Zeros",
        "Rotate Matrix by 90 degrees",
        "Print the matrix in spiral manner",
        "Count subarrays with given sum"
    ],
    "Hard": [
        "Pascal's Triangle",
        "Majority Element (n/3 times)",
        "3-Sum Problem",
        "4-Sum Problem",
        "Largest Subarray with 0 Sum",
        "Count number of subarrays with given xor K",
        "Merge Overlapping Subintervals",
        "Merge two sorted arrays without extra space",
        "Find the repeating and missing number",
        "Count Inversions",
        "Reverse Pairs",
        "Maximum Product Subarray"
    ]
}

# Create folders + CPP files
for idx, (level, problems) in enumerate(arrays_data.items(), start=1):
    folder_name = safe(f"{idx}.{level}")
    folder_path = os.path.join(base_path, folder_name)
    os.makedirs(folder_path, exist_ok=True)

    for i, prob in enumerate(problems):
        letter = string.ascii_lowercase[i]
        cpp_filename = safe(f"{letter}-{prob.replace(' ', '_')}.cpp")
        cpp_file_path = os.path.join(folder_path, cpp_filename)

        with open(cpp_file_path, "w", encoding="utf-8") as f:
            f.write(f"// {prob}\n\n")
            f.write("#include <bits/stdc++.h>\nusing namespace std;\n\nint main(){\n")
            f.write("    \n    return 0;\n}")

print("\n🎉 All folders + .cpp files created successfully!")
