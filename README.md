# C程序设计语言（K&R）
示例代码及部分练习题

task.json
```
{
    "version": "2.0.0",
    "tasks": [        
        {
            "label": "clang build",
            "type": "shell",
            "command": "powershell",
            "args": [
                "-Command",
                "$dir = Split-Path -Leaf \"${fileDirname}\"; mkdir -Force -Path \"${workspaceFolder}\\build\\$dir\" | Out-Null; clang -g --target=x86_64-w64-mingw \"${file}\" -o \"${workspaceFolder}\\build\\$dir\\${fileBasenameNoExtension}.exe\""
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": ["$clang"]
        }
    ],
    "inputs": [
                {
                    "id": "parentDir",
                    "type": "command",
                    "command": "extension.commandvariable.transform",
                    "args": {
                        "text": "${fileDirname}",
                        "find": "^.*/(.*)$",
                        "replace": "$1"
                    }
                }
            ],
}

```
launch.json
"program": "${workspaceFolder}/build/${fileDirnameBasename}/${fileBasenameNoExtension}",