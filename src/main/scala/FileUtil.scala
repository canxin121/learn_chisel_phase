package file_util

import java.io.{BufferedWriter, File, FileWriter}

object FileUtil {
  def writeToFile(filePath: String, content: String): Unit = {
    val file = new File(filePath)

    // 确保父目录存在
    val parentDir = file.getParentFile
    if (parentDir != null) {
      parentDir.mkdirs() // 创建所有必需的父目录
    }

    val bw = new BufferedWriter(new FileWriter(file))
    try {
      bw.write(content)
    } finally {
      bw.close()
    }
  }

  def readFromFile(filePath: String): String = {
    scala.io.Source.fromFile(filePath).mkString
  }
}
