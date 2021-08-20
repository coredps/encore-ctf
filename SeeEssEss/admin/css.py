import random
import string

generate_class_name = lambda: "".join(random.choices(string.ascii_letters + "_", k=16))

flag = "enc0re{everything_blurry_looks_the_same}"

with open("dist/style.css", "w") as f:
    for i in range(1000):
        if i == 657:
            content = "".join([f'"{x}" ' for x in list(flag)])
        else:
            content = "".join([f'"{x}" ' for x in list(generate_class_name())])

        f.write(f".{generate_class_name()}:after {{\n\tcontent: {content};\n}}\n\n")
