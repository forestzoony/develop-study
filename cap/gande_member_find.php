<?php
    header('Content-Type: text/html; charset = utf-8');
    if(isset($_SESSION['username'])) {
        echo "<script>alert('잘못된 접근입니다.'); history.back(); </script>";
    } else { ?>
<!DOCTYPE html>
<html>
<head>
<mata charset = "utr-8" />
<title>아이디 찾기</title>
<style>
    * {margin: 0 auto;}
    a {
        color: #333;
        text-decoration: none;
    }
    .find {
        text-align: center;
        width: 500px;
        margin-top: 50px;
    }
</style>
</head>
<body>
    <div class = "find">
        <form method = "post" action = "gande_member_find_id.php">
            <h1>회원계정 찾기</h1>
            <p><a href = "">홈으로</a></p>
                <fieldset>
                    <legend>아이디 찾기</legend>
                        <table>
                            <tr>
                                <td>이름</td>
                                <td><input type="text" size="35" name="name" placeholder="이름"></td>
                            </tr>
                            <tr>
                                <td>이메일</td>
                                <td><input type="text" name="email">@<select name="eadress"><option value="naver.com">naver.com</option>
                                <option value="daum.net">daum.net</option><option value="gmail.com">gmail.com</option></select></td>
                            </tr>
                        </table>
                </fieldset>
            <br><input type="submit" value="아이디 찾기"/>
        </form>
    </div>
</body>
</html>
<?php } ?>